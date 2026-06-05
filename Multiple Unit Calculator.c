#include <stdio.h>

int main()
{
    printf("Hello there! What kind of conversion you want to do today?\n ");
    printf("Here are many types of conversions below: \n");
    printf("1. Length\n");
    printf("2. Area\n");
    printf("3. Volume\n");
    printf("4. Mass\n");
    printf("5. Velocity\n");
    printf("6. Pressure\n");
    printf("7. Energy\n");
    printf("8. Power\n");
    printf("9. Temperature\n");

    int choose1;
    printf("Enter your chosen number: ");
    scanf("%d", &choose1);

    int choose2;

    if (choose1 == 1)
    {
        printf("Good choice, now choose any one type from these types of conversion\n");
        printf("1. in to cm, 2. cm to in\n");
        printf("3. m to ft, 4. ft to m\n");
        printf("5. yd to m, 6. m to yd\n");
        printf("7. mile to km, 8. km to mile\n");
        printf("9. n mile to m, 10. m to n mile\n");

        float in, cm, m, ft, yd, mile, km, nmile;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &in);
            cm = in * 2.54;
            printf("%f cm\n", cm);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &cm);
            in = cm / 2.54;
            printf("%f in\n", in);
        }
        else if (choose2 == 3)
        {
            printf("Input the value in float type: ");
            scanf("%f", &m);
            ft = m * (1250.0 / 381.0);
            printf("%f ft\n", ft);
        }
        else if (choose2 == 4)
        {
            printf("Input the value in float type: ");
            scanf("%f", &ft);
            m = ft * (381.0 / 1250.0);
            printf("%f m\n", m);
        }
        else if (choose2 == 5)
        {
            printf("Input the value in float type: ");
            scanf("%f", &yd);
            m = yd * (1143.0 / 1250.0);
            printf("%f m\n", m);
        }
        else if (choose2 == 6)
        {
            printf("Input the value in float type: ");
            scanf("%f", &m);
            yd = m * (1250.0 / 1143.0);
            printf("%f yd\n", yd);
        }
        else if (choose2 == 7)
        {
            printf("Input the value in float type: ");
            scanf("%f", &mile);
            km = mile * 1.609344;
            printf("%f km\n", km);
        }
        else if (choose2 == 8)
        {
            printf("Input the value in float type: ");
            scanf("%f", &km);
            mile = km / 1.609344;
            printf("%f mile\n", mile);
        }
        else if (choose2 == 9)
        {
            printf("Input the value in float type: ");
            scanf("%f", &nmile);
            m = nmile * 1852.0;
            printf("%f m\n", m);
        }
        else if (choose2 == 10)
        {
            printf("Input the value in float type: ");
            scanf("%f", &m);
            nmile = m / 1852.0;
            printf("%f n mile\n", nmile);
        }
        else
        {
            printf("That type is not valid.\n");
        }
    }

    else if (choose1 == 2)
    {
        printf("Good choice, now choose any one type from these types of conversion.\n");
        printf("1. acre to m^2, 2. m^2 to acre\n");

        float acre, m_sqr;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &acre);
            m_sqr = acre * 4046.856;
            printf("%f m^2\n", m_sqr);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &m_sqr);
            acre = m_sqr / 4046.856;
            printf("%f acre\n", acre);
        }
        else
        {
            printf("That type is not valid\n");
        }
    }

    else if (choose1 == 3)
    {
        printf("Good choice, now choose any one type from these types of conversion.\n");
        printf("1. gal(US) to L, 2. L to gal(US)\n");
        printf("3. gal(UK) to L, 4. L to gal(UK)\n");

        float gal_UK, gal_US, L;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &gal_US);
            L = gal_US * 3.785412;
            printf("%f L\n", L);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &L);
            gal_US = L / 3.785412;
            printf("%f gal(US)\n", gal_US);
        }
        else if (choose2 == 3)
        {
            printf("Input the value in float type: ");
            scanf("%f", &gal_UK);
            L = gal_UK * 4.54609;
            printf("%f L\n", L);
        }
        else if (choose2 == 4)
        {
            printf("Input the value in float type: ");
            scanf("%f", &L);
            gal_UK = L / 4.54609;
            printf("%f gal(UK)\n", gal_UK);
        }
        else
        {
            printf("That type is not valid\n");
        }
    }

    else if (choose1 == 4)
    {
        printf("Good choice. Now choose any one type of conversion from these types.\n");
        printf("1. oz to g, 2. g to oz\n");
        printf("3. kg to lb, 4. lb to kg\n");

        float oz, g, kg, lb;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &oz);
            g = oz * 28.34952;
            printf("%f g\n", g);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &g);
            oz = g / 28.34952;
            printf("%f oz\n", oz);
        }
        else if (choose2 == 3)
        {
            printf("Input the value in float type: ");
            scanf("%f", &kg);
            lb = kg * 2.204622476;
            printf("%f lb\n", lb);
        }
        else if (choose2 == 4)
        {
            printf("Input the value in float type: ");
            scanf("%f", &lb);
            kg = lb / 2.204622476;
            printf("%f kg\n", kg);
        }
        else
        {
            printf("That type is not valid\n");
        }
    }

    else if (choose1 == 5)
    {
        printf("Good choice. Now choose any one from these types of conversion.\n");
        printf("1. km/h to m/s, 2. m/s to km/h\n");

        float kmh, ms;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &kmh);
            ms = kmh * (5.0 / 18.0);
            printf("%f m/s\n", ms);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &ms);
            kmh = ms * (18.0 / 5.0);
            printf("%f km/h\n", kmh);
        }
        else
        {
            printf("That type is not valid\n");
        }
    }

    else if (choose1 == 6)
    {
        printf("Good choice. Now choose any one from these types of conversion\n ");
        printf("1. atm to pa, 2. pa to atm\n");
        printf("3. mmhg to pa, 4. pa to mmhg\n");
        printf("5. kgf/cm^2 to pa, 6. pa to kgf/cm^2\n");
        printf("7. lbf/in^2 to kpa, 8. kpa to lbf/in^2\n");

        float atm, pa, mmhg, kgfcm, lbfin, kpa;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &atm);
            pa = atm * 101325.0;
            printf("%f pa\n", pa);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &pa);
            atm = pa / 101325.0;
            printf("%f atm\n", atm);
        }
        else if (choose2 == 3)
        {
            printf("Input the value in float type: ");
            scanf("%f", &mmhg);
            pa = mmhg * 133.3224;
            printf("%f pa\n", pa);
        }
        else if (choose2 == 4)
        {
            printf("Input the value in float type: ");
            scanf("%f", &pa);
            mmhg = pa / 133.3224;
            printf("%f mmhg\n", mmhg);
        }
        else if (choose2 == 5)
        {
            printf("Input the value in float type: ");
            scanf("%f", &kgfcm);
            pa = kgfcm * 98066.5;
            printf("%f pa\n", pa);
        }
        else if (choose2 == 6)
        {
            printf("Input the value in float type: ");
            scanf("%f", &pa);
            kgfcm = pa / 98066.5;
            printf("%f kgf/cm^2\n", kgfcm);
        }
        else if (choose2 == 7)
        {
            printf("Input the value in float type: ");
            scanf("%f", &lbfin);
            kpa = lbfin * 6.894757;
            printf("%f kpa\n", kpa);
        }
        else if (choose2 == 8)
        {
            printf("Input the value in float type: ");
            scanf("%f", &kpa);
            lbfin = kpa / 6.894757;
            printf("%f lbf/in^2\n", lbfin);
        }
        else
        {
            printf("This type is not valid.\n");
        }
    }

    else if (choose1 == 7)
    {
        printf("Nice choice. Now choose any one from these types of conversion\n");
        printf("1. kgf.m to j, 2. j to kgf.m\n");
        printf("3. j to cal, 4. cal to j\n");

        float kgfm, j, cal;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &kgfm);
            j = kgfm * 9.80665;
            printf("%f j\n", j);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &j);
            kgfm = j / 9.80665;
            printf("%f kgf.m\n", kgfm);
        }
        else if (choose2 == 3)
        {
            printf("Input the value in float type: ");
            scanf("%f", &j);
            cal = j * (5000.0 / 20929.0);
            printf("%f cal\n", cal);
        }
        else if (choose2 == 4)
        {
            printf("Input the value in float type: ");
            scanf("%f", &cal);
            j = cal * (20929.0 / 5000.0);
            printf("%f j\n", j);
        }
        else
        {
            printf("This type is not valid\n");
        }
    }

    else if (choose1 == 8)
    {
        printf("Nice choice. Now choose any one from these types of conversion.\n");
        printf("1. hp to kw, 2. kw to hp\n");

        float kw, hp;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &hp);
            kw = hp * 0.7457;
            printf("%f kw\n", kw);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &kw);
            hp = kw / 0.7457;
            printf("%f hp\n", hp);
        }
        else
        {
            printf("This type is not valid.\n");
        }
    }

    else if (choose1 == 9)
    {
        printf("Nice choice. Now choose any one from these types of conversions.\n");
        printf("1. F to C, 2. C to F\n");

        float F, C;
        printf("Enter your chosen number: ");
        scanf("%d", &choose2);

        if (choose2 == 1)
        {
            printf("Input the value in float type: ");
            scanf("%f", &F);
            C = (F - 32.0) * 5.0 / 9.0;
            printf("%f C\n", C);
        }
        else if (choose2 == 2)
        {
            printf("Input the value in float type: ");
            scanf("%f", &C);
            F = (C * 9.0 / 5.0) + 32.0;
            printf("%f F\n", F);
        }
        else
        {
            printf("This type is not valid.\n");
        }
    }
    else
    {
        printf("This type is not valid\n");
    }

    return 0;
}
