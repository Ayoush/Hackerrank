
class Rectangle
{
public:

    void Display()
    {
        cout << width << ' ' << height << '\n';
    }

protected:

    unsigned int width;
    unsigned int height;
};

class RectangleArea: public Rectangle
{
public:

    void Input()
    {
        cin >> width >> height;
    }

    void Display()
    {
        cout << width * height << '\n';
    }
};