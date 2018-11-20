//
// Created by mango on 10/26/18.
//类模板
//

#ifndef FIFTH_TEST_H
#define FIFTH_TEST_H

template <class T> class test
{
public:
    test();
    ~test();
    void push(T t);
    T pop();
    bool isEmpty();

private:
    T *m_pT;
    int m_maxSize;
    int m_size;
};

template <class T> test<T>::test()
{
    m_maxSize = 100;
    m_size = 0;
    m_pT = new T[m_maxSize];
}

template <class T> test<T>::~test()
{
    delete []m_pT;
}

template <class T> void test<T>::push(T t)
{
    m_size++;
    m_pT[m_size - 1] = t;
}

template <class T> T test<T>::pop()
{
    T t = m_pT[m_size - 1];
    m_size--;
    return t;
}

template <class T> bool test<T>::isEmpty()
{
    return m_size == 0;
}

#endif //FIFTH_TEST_H
