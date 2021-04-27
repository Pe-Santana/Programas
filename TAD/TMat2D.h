
typedef struct TMat2D TMat2D;

TMat2D *mat2D_create(int nlinhas, int ncolunas);

int mat2D_clear (TMat2D *mat);

int mat2D_escreve (TMat2D *mat, double valor, int lin, int col);

int mat2D_acessa (TMat2D *mat, double *valor, int lin, int col);

int mat2D_aleatorio (TMat2D *mat,double MAX);

int  mat2D_soma(TMat2D *mat, TMat2D *mat2, TMat2D *somado);

int mat2D_multMatrizes(TMat2D *mat, TMat2D *mat2, TMat2D *mult);

int mat2D_multint(TMat2D *mat, int val);

int mat2D_traco(TMat2D *mat, double *traco);

int mat2D_somaColunas(TMat2D *mat, double *vet);

int mat2D_somaLinhas(TMat2D *mat, double *vet);

