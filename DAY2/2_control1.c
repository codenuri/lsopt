// binary breakdown
void bad()
{
    int i = 8;

    // 8 ���� ��
    if (i == 1) {}
    else if (i == 2) {}
    else if (i == 3) {}
    else if (i == 4) {}
    else if (i == 5) {}
    else if (i == 6) {}
    else if (i == 7) {}
    else if (i == 8) {}
}

void good()
{
    int i = 0;

    // binary breakdown - up & down ������ ����
    if (i <= 4) 
    {
        if (i <= 2)
        {
            if (i == 2) {} // 2
            else {}         // 1

        }
        else
        {
        }
    }
    else
    {
    }
}

int main()
{
    bad();
    good();
}