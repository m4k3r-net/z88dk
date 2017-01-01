
// automatically generated by m4 from headers in proto subdir


#ifndef _ADT_BV_PRIORITY_QUEUE_H
#define _ADT_BV_PRIORITY_QUEUE_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct bv_priority_queue_s
{

   void       *compar;
   void       *data;
   size_t      size;
   size_t      capacity;
   size_t      max_size;

} bv_priority_queue_t;

extern size_t bv_priority_queue_capacity(bv_priority_queue_t *q);


extern void bv_priority_queue_clear(bv_priority_queue_t *q);


extern void *bv_priority_queue_data(bv_priority_queue_t *q);


extern void bv_priority_queue_destroy(bv_priority_queue_t *q);


extern int bv_priority_queue_empty(bv_priority_queue_t *q);


extern bv_priority_queue_t *bv_priority_queue_init(void *p,size_t capacity,size_t max_size,void *compar);


extern size_t bv_priority_queue_max_size(bv_priority_queue_t *q);


extern int bv_priority_queue_pop(bv_priority_queue_t *q);


extern int bv_priority_queue_push(bv_priority_queue_t *q,int c);


extern int bv_priority_queue_reserve(bv_priority_queue_t *q,size_t n);


extern int bv_priority_queue_resize(bv_priority_queue_t *q,size_t n);


extern int bv_priority_queue_shrink_to_fit(bv_priority_queue_t *q);


extern size_t bv_priority_queue_size(bv_priority_queue_t *q);


extern int bv_priority_queue_top(bv_priority_queue_t *q);



#endif