/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_bool_3
kcg_bool kcg_comp_array_bool_3(array_bool_3 *kcg_c1, array_bool_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_3 */

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** kcg_types.c
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

