#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <algorithm>

namespace KW {
   
    /**
     * Sort data in the specified sequence using bubble sort
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void bubble_sort(RI first, RI last, int& tot_compare, int& tot_exchange){
        tot_compare = 0;
        tot_exchange = 0;
        
        int pass = 1;
        bool exchanges;
        do {
            exchanges = false;
            for (RI first_of_pair = first; first_of_pair != last - pass; ++first_of_pair){
                RI second_of_pair = first_of_pair + 1;
                ++tot_compare;
                if(*second_of_pair < *first_of_pair){
                    ++tot_exchange;
                    std::iter_swap(first_of_pair, second_of_pair);
                    exchanges = true;
                }
            }
            pass++;
        }
        while (exchanges);
    }
}
#endif /* BUBBLESORT_H */

