#include "Racelib.h"

ground::ground() {
	V = 0;
	t_dvij = 0;
}
double ground::run(int S) {
	return S / V;
}

verblud::verblud() {
	V = 10;
	t_dvij = 30;
	t_otd_1 = 5;
	t_otd_2 = 8;
}
double verblud::run(int S){
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    if (count_ost < 2) {
        return t + t_otd_1;
    }
    else {
        double t_ost = 0;
        for (int i = 2; i < count_ost; ++i) {
            t_ost += t_otd_2;
        }
        return t + t_otd_1 + t_ost;
    }
}

verblud_speed::verblud_speed() {
    V = 40;
    t_dvij = 10;
    t_otd1 = 5;
    t_otd2 = 6.5;
    t_otdN = 8;
}

double verblud_speed::run(int S) {
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    if (count_ost < 2) {
        return t + t_otd1;
    }
    if (count_ost < 3) {
        return t + t_otd1 + t_otd2;
    }
    else {
        double t_ost = 0;
        for (int i = 3; i < count_ost; ++i) {
            t_ost += t_otdN;
        }
        return t + t_otd1 + t_otd2 + t_ost;
    }
}

kentavr::kentavr() {
    V = 15;
    t_dvij = 8;
    t_otd = 2;
}

double kentavr::run(int S) {
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    else {
        double t_ost = 0;
        for (int i = 1; i < count_ost; ++i) {
            t_ost += t_otd;
        }
        return t + t_ost;
    }
}

boots::boots() {
    V = 6;
    t_dvij = 60;
    t_otd1 = 10;
    t_otdN = 5;
}

double boots::run(int S) {
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    if (count_ost < 2) {
        return t + t_otd1;
    }
    else {
        double t_ost = 0;
        for (int i = 2; i < count_ost; ++i) {
            t_ost += t_otdN;
        }
        return t + t_otd1 + t_ost;
    }
}

fly::fly() {
    V = 0;
}

double fly::run(int S) {
    return S / V;
}

kover::kover() {
    V = 10;
}

double kover::run(int S) {
    int pers = 0;
    if (S < 1000) {
        pers = 0;
    }
    if (S > 1000 && S < 5000) {
        pers = 3;
    }
    if (S > 5000 && S < 10000) {
        pers = 10;
    }
    if (S >= 10000) {
        pers = 5;
    }
    double realS = static_cast<double> (S - ((S * pers) / 100));
    return realS / V;
}

orel::orel() {
    V = 8;
}

double orel::run(int S) {
    int pers = 6;
    double realS = static_cast<double> (S - ((S * pers) / 100));
    return realS / V;
}

metla::metla() {
    V = 20;
}

double metla::run(int S) {
    int pers = S / 1000;
    if (pers >= 1) {
        double realS = static_cast<double> (S - ((S * pers) / 100));
        return realS / V;
    }
    else {
        return S / V;
    }
}
