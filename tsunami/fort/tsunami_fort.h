typedef struct c_SimParams{
    int icenter;
    int grid_size;
    int timesteps;
    double dt;
    double dx;
    double c;
    double decay;
} c_SimParams;

// void c_run_solver(int *icenter, int *grid_size, int *timesteps, double *dt, double *dx, double *c, double *decay, double *h);
void c_run_solver(void *c_SimParams, double *h);