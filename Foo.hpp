class Foo {

private:
    int i;
    int j;
public:
    Foo(int val1, int val2);
    ~Foo();
    int square() {return i*i;};

    int getI() const {
        return i;
    }

    void setI(int i) {
        Foo::i = i;
    }

    int getJ() const {
        return j;
    }

    void setJ(int j) {
        Foo::j = j;
    }
};