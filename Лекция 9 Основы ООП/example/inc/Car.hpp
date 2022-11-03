#pragma once
#include <string>

namespace mt
{
    struct Person
    {
        int age;
        std::string name;
    };

    // �����. �������� ������ � �������� ��� ����
    class Car
    {
    private:
        // 1 �������: ���������� - �� ��������� ������� ����� ����������� ����� ����������,
        // ����������� ��� ������� ������
        double m_acceleration = 0;
        std::string m_model = "";
        double m_maxVelocity = 0;
        double m_x = 0;
        double m_raduisOfWheel = 0;
        Person* m_persons = nullptr;

        // 2 �������: ������������ - ������������� ������� � ����� � ������� ������
    public:
        // ����������� �� ���������
        Car() {}

        // �����������
        Car(double acceleration, std::string model, double maxVelocity);

        // ����������
        ~Car();

        // ������� ���������
        void SetModel(std::string model)
        {
            m_model = model;
        }

        void SetAcceleration(double acceleration)
        {
            m_acceleration = acceleration;
        }

        void Move(double dx);

        // ������
        double Position();

        // ������
        bool SetRadiusOfWheel(int radius);
        void SetPersonsQuantity(int n);

        double Circumference();

        void Info();
    };
}

