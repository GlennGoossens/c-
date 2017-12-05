#ifndef SCHIJF_H
#define SCHIJF_H
template <typename T>
class Schijf{
    public:
        Schijf();
        Schijf(const Schijf & s):ptr(s.ptr){};
        ~Schijf();
    private:
        Doos *ptr;
};
#endif