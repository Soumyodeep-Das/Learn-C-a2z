#include<stdio.h>

struct Cube{
    char front, back, left, right, up, down;
};typedef struct Cube cube;

int main(){
    cube rubik[3][3][3];
    int i, j, k;
    rubik[0][0][0].front='b'
    rubik[0][0][0].back='n'
    rubik[0][0][0].left='n'
    rubik[0][0][0].right='r'
    rubik[0][0][0].up='n'
    rubik[0][0][0].down='y'

    rubik[1][0][0].front='b'
    rubik[1][0][0].back='n'
    rubik[1][0][0].left='n'
    rubik[1][0][0].right='n'
    rubik[1][0][0].up='n'
    rubik[1][0][0].down='y'

    rubik[2][0][0].front='b'
    rubik[2][0][0].back='n'
    rubik[2][0][0].left='o'
    rubik[2][0][0].right='n'
    rubik[2][0][0].up='n'
    rubik[2][0][0].down='y'

    rubik[0][0][1].front='n'
    rubik[0][0][1].back='n'
    rubik[0][0][1].left='n'
    rubik[0][0][1].right='r'
    rubik[0][0][1].up='n'
    rubik[0][0][1].down='y'

    rubik[1][0][1].front='n'
    rubik[1][0][1].back='n'
    rubik[1][0][1].left='n'
    rubik[1][0][1].right='n'
    rubik[1][0][1].up='n'
    rubik[1][0][1].down='y'

    rubik[2][0][1].front='n'
    rubik[2][0][1].back='n'
    rubik[2][0][1].left='o'
    rubik[2][0][1].right='n'
    rubik[2][0][1].up='n'
    rubik[2][0][1].down='y'

    rubik[0][0][2].front='n'
    rubik[0][0][2].back=g
    rubik[0][0][2].left='n'
    rubik[0][0][2].right='r'
    rubik[0][0][2].up='n'
    rubik[0][0][2].down='y'

    rubik[1][0][2].front='n'
    rubik[1][0][2].back=g
    rubik[1][0][2].left='n'
    rubik[1][0][2].right='n'
    rubik[1][0][2].up='n'
    rubik[1][0][2].down='y'

    rubik[2][0][2].front='n'
    rubik[2][0][2].back=g
    rubik[2][0][2].left='o'
    rubik[2][0][2].right='n'
    rubik[2][0][2].up='n'
    rubik[2][0][2].down='y'

    rubik[0][1][0].front='b'
    rubik[0][1][0].back='n'
    rubik[0][1][0].left='n'
    rubik[0][1][0].right='r'
    rubik[0][1][0].up='n'
    rubik[0][1][0].down='n'

    rubik[1][1][0].front='b'
    rubik[1][1][0].back='n'
    rubik[1][1][0].left='n'
    rubik[1][1][0].right='n'
    rubik[1][1][0].up='n'
    rubik[1][1][0].down='n'

    rubik[2][1][0].front='b'
    rubik[2][1][0].back='n'
    rubik[2][1][0].left='o'
    rubik[2][1][0].right='n'
    rubik[2][1][0].up='n'
    rubik[2][1][0].down='n'

    rubik[0][1][1].front='n'
    rubik[0][1][1].back='n'
    rubik[0][1][1].left='n'
    rubik[0][1][1].right='r'
    rubik[0][1][1].up='n'
    rubik[0][1][1].down='n'

    rubik[1][1][1].front='n'
    rubik[1][1][1].back='n'
    rubik[1][1][1].left='n'
    rubik[1][1][1].right='n'
    rubik[1][1][1].up='n'
    rubik[1][1][1].down='n'

    rubik[2][1][1].front='n'
    rubik[2][1][1].back='n'
    rubik[2][1][1].left='o'
    rubik[2][1][1].right='n'
    rubik[2][1][1].up='n'
    rubik[2][1][1].down='n'

    rubik[0][1][2].front='n'
    rubik[0][1][2].back=g
    rubik[0][1][2].left='n'
    rubik[0][1][2].right='r'
    rubik[0][1][2].up='n'
    rubik[0][1][2].down='n'

    rubik[1][1][2].front='n'
    rubik[1][1][2].back=g
    rubik[1][1][2].left='n'
    rubik[1][1][2].right='n'
    rubik[1][1][2].up='n'
    rubik[1][1][2].down='n'

    rubik[2][1][2].front='n'
    rubik[2][1][2].back=g
    rubik[2][1][2].left='o'
    rubik[2][1][2].right='n'
    rubik[2][1][2].up='n'
    rubik[2][1][2].down='n'

    rubik[0][2][0].front='b'
    rubik[0][2][0].back='n'
    rubik[0][2][0].left='n'
    rubik[0][2][0].right='r'
    rubik[0][2][0].up='w'
    rubik[0][2][0].down='n'

    rubik[1][2][0].front='b'
    rubik[1][2][0].back='n'
    rubik[1][2][0].left='n'
    rubik[1][2][0].right='n'
    rubik[1][2][0].up='w'
    rubik[1][2][0].down='n'

    rubik[2][2][0].front='b'
    rubik[2][2][0].back='n'
    rubik[2][2][0].left='o'
    rubik[2][2][0].right='n'
    rubik[2][2][0].up='w'
    rubik[2][2][0].down='n'

    rubik[0][2][1].front='n'
    rubik[0][2][1].back='n'
    rubik[0][2][1].left='n'
    rubik[0][2][1].right='r'
    rubik[0][2][1].up='w'
    rubik[0][2][1].down='n'

    rubik[1][2][1].front='n'
    rubik[1][2][1].back='n'
    rubik[1][2][1].left='n'
    rubik[1][2][1].right='n'
    rubik[1][2][1].up='w'
    rubik[1][2][1].down='n'

    rubik[2][2][1].front='n'
    rubik[2][2][1].back='n'
    rubik[2][2][1].left='o'
    rubik[2][2][1].right='n'
    rubik[2][2][1].up='w'
    rubik[2][2][1].down='n'

    rubik[0][2][2].front='n'
    rubik[0][2][2].back=g
    rubik[0][2][2].left='n'
    rubik[0][2][2].right='r'
    rubik[0][2][2].up='w'
    rubik[0][2][2].down='n'

    rubik[1][2][2].front='n'
    rubik[1][2][2].back=g
    rubik[1][2][2].left='n'
    rubik[1][2][2].right='n'
    rubik[1][2][2].up='w'
    rubik[1][2][2].down='n'

    rubik[2][2][2].front='n'
    rubik[2][2][2].back=g
    rubik[2][2][2].left='o'
    rubik[2][2][2].right='n'
    rubik[2][2][2].up='w'
    rubik[2][2][2].down='n'




    rubik[][][]=
    

    return 0;
}