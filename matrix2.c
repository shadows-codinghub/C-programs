#include<stdio.h>
void add(int mat1[10][10],int mat2[10][10],int result[10][10],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			result[i][j]=mat1[i][j]+mat2[i][j];
		}
	}	
	}
void read(int mat[10][10],int row, int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Enter element at positon(%d,%d):",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
}
void display(int mat[10][10],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",mat[i][j]);
			 
		}
	printf("\n");
	}
}
void multipy(int mat1[10][10],int mat2[10][10],int arow,int acol,int brow,int bcol,int result[10][10]){
	int sum;
	 
		for(int i=0;i<arow;i++){
			for(int j=0;j<bcol;j++){
				result[i][j] = 0;
				for(int k=0;k<acol;k++){
					result[i][j]+=mat1[i][k]*mat2[k][j];	
				}
			}
		}
	}

void transpose(int mat[10][10],int row,int col,int result[10][10]){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				result[j][i]=mat[i][j];			
			}
		}
}
int main(){
	char ch='Y';
	int mat1[10][10],mat2[10][10],result[10][10];	
	int row,col;
	int n;
	int a=1;
	while(a){

			printf("Press 1 to add a matrix\n");
			printf("Press 2 to multipy two matrix\n");
			printf("Press 3 to transpose a matrix\n");
			printf("Enter value:");
			scanf("%d",&n);
			if(n==1){
				int mat3[10][10];
				printf("Enter number of rows and columns for first matrix:\n");
				scanf("%d %d",&row,&col);
				read(mat1,row,col);
				printf("Enter number of rows and columns for second matrix:\n");
				scanf("%d %d",&row,&col);
				read(mat2,row,col);
				if (mat1[row][col] != mat2[row][col]) {
                    			printf("Matrix multiplication not possible! (Columns of first must match rows of second)\n");
                    			break;
				}

				add(mat1,mat2,result,row,col);
				display(result,row,col);
			}
			else if(n==2){
				int arow,acol,brow,bcol;
				printf("Enter number of rows and columns:\n");
				scanf("%d %d",&arow,&acol);
				read(mat1,arow,acol);
				printf("Enter number of rows and columns:\n");
				scanf("%d %d",&brow,&bcol);
				read(mat2,brow,bcol);
				if (acol != brow) {
                    printf("Matrix multiplication not possible! (Columns of first must match rows of second)\n");
                    break;
                }
				multipy(mat1,mat2,arow,acol,brow,bcol,result);
				display(result,arow,bcol);
			}
			else if(n==3){
				printf("Enter number of rows and columns:\n");
				scanf("%d %d",&row,&col);
				read(mat1,row,col);
				transpose(mat1,row,col,result);
				display(result,col,row);
			}
			else{
				printf("Enter invalid input!!!\n");
			}
			printf("Do you wish to continue[4-yes/0-no]?\n");
			scanf("%d",&a);
			}
		}
	


