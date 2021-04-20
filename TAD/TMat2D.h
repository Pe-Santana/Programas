
typedef struct TMat2D TMat2D;

TMat2D *mat2D_create(int nlinhas, int ncolunas);

int mat2D_clear (TMat2D *mat);

int mat2D_escreve (TMat2D *mat, double valor, int lin, int col);

int mat2D_acessa (TMat2D *mat, double *valor, int lin, int col);

int mat2D_aleatorio (TMat2D *mat,double MAX);
