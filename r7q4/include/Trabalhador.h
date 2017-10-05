#ifndef TRABALHADOR_H
#define TRABALHADOR_H


class Trabalhador
{
    public:
        Trabalhador();
        virtual ~Trabalhador();
        void setSalario(float salario);
    protected:
        float salario;
    private:
};

#endif // TRABALHADOR_H
