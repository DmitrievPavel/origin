#pragma once
#ifdef RACELIB_EXPORTS
#define RACELIB_API __declspec(dllexport)
#else
#define RACELIB_API __declspec(dllimport)
#endif

class ground {
public:
    double V;
    double t_dvij;
    ground();
    virtual double run(int S);
};

class verblud : public ground {
public:
    double t_otd_1;
    double t_otd_2;
    RACELIB_API verblud();
    double RACELIB_API run(int S) override;
};

class verblud_speed : public ground {
public:
    double t_otd1;
    double t_otd2;
    double t_otdN;
    RACELIB_API verblud_speed();
    double RACELIB_API run(int S) override;
};

class kentavr : public ground {
public:
    double t_otd;
    RACELIB_API kentavr();
    double RACELIB_API run(int S) override;
};

class boots : public ground {
public:
    double t_otd1, t_otdN;
    RACELIB_API boots();
    double RACELIB_API run(int S) override;
};

class fly {
public:
    double V;
    fly();
    virtual double run(int S);
};

class kover : public fly {
public:
    RACELIB_API kover();
    double RACELIB_API run(int S) override;
};

class orel : public fly {
public:
    RACELIB_API orel();
    double RACELIB_API run(int S) override;
};

class metla : public fly {
public:
    RACELIB_API metla();
    double RACELIB_API run(int S) override;
};