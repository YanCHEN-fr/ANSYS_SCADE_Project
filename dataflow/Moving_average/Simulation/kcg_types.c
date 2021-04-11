/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/Moving_average/Simulation/config.txt
** Generation date: 2021-02-08T22:35:50
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_float64_3
kcg_bool kcg_comp_array_float64_3(
  array_float64_3 *kcg_c1,
  array_float64_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float64_3 */

#ifdef kcg_use_array_float64_2
kcg_bool kcg_comp_array_float64_2(
  array_float64_2 *kcg_c1,
  array_float64_2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float64_2 */

#ifdef kcg_use_struct_226
kcg_bool kcg_comp_struct_226(struct_226 *kcg_c1, struct_226 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_float64_2(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_226 */

#ifdef kcg_use_struct_236
kcg_bool kcg_comp_struct_236(struct_236 *kcg_c1, struct_236 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_float64_3(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_236 */

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** kcg_types.c
** Generation date: 2021-02-08T22:35:50
*************************************************************$ */

