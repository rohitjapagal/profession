/**
 * \file   file.c
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
$x = 0;
sub f 
{ 
   return $x; 
}
sub g 
{ 
   local $x = 1; return f(); 
}
print g()."\n";
