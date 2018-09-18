#define FORMULA_H
#define PI 3.14159265359


extern double a;
extern double b;
extern double c;
extern double d;
extern double e;
extern double f;
extern double g;
extern double h;
extern double i;

double crossVec(double a, double b, double c, double d, double e, double f);

double crossAbsolute(double a, double b, double c, double d, double e, double f);

double crossMag(double a, double b, double c);

double dotVec(double a, double b, double c, double d, double e, double f);

double dotMag(double a, double b, double c);

double dotBeta(double a, double b, double c);

double volPar(double a, double b, double c, double d, double e, double f, double g, double h, double i);

double scalPro(double a, double b, double c, double d, double e, double f);

void vecPro(double a, double b, double c, double d, double e, double f);

void help(double &a);

void credits(double &a);


