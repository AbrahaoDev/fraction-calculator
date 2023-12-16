#include <stdio.h>
int main()
{
	int op,i,j,x;
	int v1[2], v2[2], v3[2];
printf("Qual operação entre frações você deseja fazer?\n");
printf("1-adição\n");
printf("2-subtração\n");
printf("3-multiplição\n");
printf("4-divisão\n");
scanf("%d",&op);
printf("Entre com os elementos da primeira fração\n");
scanf("%d %d", &v1[0], &v1[1]);
printf("Entre com os elementos da segunda fração\n");
scanf("%d %d", &v2[0], &v2[1]);

if(op==1){
	if(v1[1]==v2[1]){
		v3[0]=v1[0]+v2[0];
		v3[1]=v1[1];

	}
	else{
		v3[0]=(v1[0]*v2[1])+(v1[1]*v2[0]);
		v3[1]=v1[1]*v2[1];
	}

}
if(op==2){
	if(v1[1]==v2[1]){
		v3[0]=v1[0]-v2[0];
		v3[1]=v1[1];

	}
	else{
		v3[0]=(v1[0]*v2[1])-(v1[1]*v2[0]);
		v3[1]=v1[1]*v2[1];

	}
}

if(op==3){
	v3[0]=v1[0]*v2[0];
		v3[1]=v1[1]*v2[1];

}
if(op==4){
	v3[0]=v1[0]*v2[1];
		v3[1]=v1[1]*v2[0];

}



printf("Resultado=%d/%d\n", v3[0], v3[1]);


	return 0;
}