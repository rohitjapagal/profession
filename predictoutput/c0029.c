/**
 * \file   file.cpp
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   
 */
int main()
{
    char inchar = 'A';
    switch (inchar)
    {
    case 'A' :
        printf ("choice A \n") ;
    case 'B' :
    {
        printf ("choice B") ;
        break;
    }
    case 'C' :
    case 'D' :
    case 'E' :
    default:
        printf ("No Choice") ;
    }
}
