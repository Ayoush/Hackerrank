class Matrix{
    public:
        vector< vector<int> > a;
        Matrix operator + (const Matrix &other){
            Matrix mat;
            mat.a.reserve(1000);
            int n = a.size();
            int m = a[0].size();
            int i, j;
            for (i = 0; i < n; i++) {
                int sum = 0;
                vector<int> line;
                for (j = 0; j < m; j++) {
                    sum = this->a[i][j] + other.a[i][j];
                    line.push_back(sum);
                }
                mat.a.push_back(line);
            }
            return mat;
        }
};