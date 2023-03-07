// function to multiply two matrices
function matrixMultiplication(row1,col1,row2,col2,matrix1,matrix2)
{
    if (col1!=row2)
    {
        return "multiplication is not possible due to invalid dimensions";
    }
    else
    {
        let resultMatrix=new Array(row1);
        for (let i=0;i<row1;i++)
        {
            resultMatrix[i]=new Array(col2);
            for (let j=0;j<col2;j++)
            {
                let sum=0;
                for (let k=0;k<col1;k++)
                {
                    sum=sum+matrix1[i][k]*matrix2[k][j];
                }
                resultMatrix[i][j]=sum;
            }
        }
        return resultMatrix;
    }
}


// function to test result of matrixMultiplication() function
function testMatrixMultiplication(row1,col1,row2,col2,matrix1,matrix2,expectedResult)
{
    let result=matrixMultiplication(row1,col1,row2,col2,matrix1,matrix2);
    for(let i=0;i<row1;i++)
    {
        for(let j=0;j<col2;j++)
        {
            if(result[i][j]==expectedResult[i][j])
            {
                return "Test case is successfull";;
            }
            else
            {
                return "Test case is failed";
            }
        }
    }
}

let matrix1=[[1, 2], [3, 4]];
let matrix2=[[5, 6], [7, 8]];
let expectedResult=[[19, 22], [43, 50]];
console.log(testMatrixMultiplication(2,2,3,2,matrix1,matrix2,expectedResult)) // Test case is failed

let matrix3=[[1, 2], [3, 4]];
let matrix4=[[5, 6], [7, 9]];
let expectedResult1=[[19, 22], [43, 50]];
console.log(testMatrixMultiplication(2,2,2,2,matrix3,matrix4,expectedResult1)) // Test case is successfull

let matrix5=[[1, 2]];
let matrix6=[[5, 6]];
let expectedResult2=[[19, 24]];
console.log(testMatrixMultiplication(1,2,1,2,matrix5,matrix6,expectedResult2)) // Test case is failed