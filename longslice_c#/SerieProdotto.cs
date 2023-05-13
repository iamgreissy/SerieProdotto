using System;
using System.Collections.Generic;
using System.Linq;

public static class LargestSeriesProduct
{
    public static long GetLargestProduct(string digits, int span) 
    {
        if( span==0 )
            return 1;

        if(span<0)
            throw new ArgumentException();
        if(digits=="")
            throw new ArgumentException();
        if(digits.Length<span)
            throw new ArgumentException();
        long max=0;
        long curr=1;
        for (int i = 0; i <= digits.Length - span; i++) { // ciclo for per trovare la sottostringa con i valori più alti
            curr=1;
            for (int j = 0; j < span; j++) {
                if(char.IsDigit(digits[i+j]))
                    curr *= digits[i+j] - '0'; // calcolo del prodotto della sottostringa
                else 
                    throw new ArgumentException();
            }
            if (curr > max) { 
                max = curr; 
                //massimo = i; // salvo la posizione di inizio della sottostringa
            }
        }
        return max;
    }
}