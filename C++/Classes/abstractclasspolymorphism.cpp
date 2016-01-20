class LRUCache: public Cache
{
public:

    LRUCache(int capacity)
    {
        head = nullptr;
        tail = nullptr;
        cp   = capacity;
    }

    ~LRUCache()
    {
        while (head)
        {
            auto node = head;
            head      = head->next;

            delete node;
        }
    }

    void set(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            move_to_front(key);
        }
        else
        {
            prepend(new Node{key, value});

            if (mp.size() > cp)
            {
                delete detatch(tail->key);
            }
        }
    }

    int get(int key)
    {
        if (!mp.count(key))
        {
            return -1;
        }

        move_to_front(key);

        return mp[key]->value;
    }

private:

    void move_to_front(int key)
    {
        prepend(detatch(key));
    }

    void prepend(Node* node)
    {
        node->prev = nullptr;
        node->next = head;
        head       = node;

        if (!tail)
        {
            tail = node;
        }

        mp[node->key] = node;
    }

    Node* detatch(int key)
    {
        auto node = mp[key];
        mp.erase(key);

        if (node->prev)
        {
            node->prev->next = node->next;
        }
        else
        {
            head = node->next;
        }

        if (node->next)
        {
            node->next->prev = node->prev;
        }
        else
        {
            tail = node->prev;
        }

        return node;
    }
};
