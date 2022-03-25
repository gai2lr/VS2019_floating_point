#include <iostream>
using namespace std;

#define rbp_mtl_Square_mac(x)       ( (x) * (x) )

typedef struct rbp_Tag_Point_st
{
  signed short X_s16;
  signed short Y_s16;
} rbp_Type_Point_st;

typedef struct rbp_Tag_ehy_Regression_st
{
  rbp_Type_Point_st Point1st_st;
  signed long SumDeltaX_s32;
  signed long SumDeltaXX_s32;
  signed long SumDeltaXY_s32;
  signed long SumDeltaY_s32;
  signed long SumDeltaYY_s32;
  unsigned short Num_u16;
} rbp_Type_ehy_Regression_st;


void initExample1_TC1(rbp_Type_ehy_Regression_st* const f_RegSumToMerge_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTarget_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTargetOutput_pcst)
{
  // Inputs
  f_RegSumToMerge_pcst->Num_u16 = (unsigned short)30;
  f_RegSumToMerge_pcst->Point1st_st.X_s16 = (signed short)-8504;
  f_RegSumToMerge_pcst->Point1st_st.Y_s16 = (signed short)19945;
  f_RegSumToMerge_pcst->SumDeltaX_s32 = 93;
  f_RegSumToMerge_pcst->SumDeltaY_s32 = -245;
  f_RegSumToMerge_pcst->SumDeltaXX_s32 = 8108;
  f_RegSumToMerge_pcst->SumDeltaYY_s32 = 48685;
  f_RegSumToMerge_pcst->SumDeltaXY_s32 = -16856;

  f_RegSumTarget_pcst->Num_u16 = (unsigned short)250;
  f_RegSumTarget_pcst->Point1st_st.X_s16 = (signed short)-8650;
  f_RegSumTarget_pcst->Point1st_st.Y_s16 = (signed short)20684;
  f_RegSumTarget_pcst->SumDeltaX_s32 = 96;
  f_RegSumTarget_pcst->SumDeltaY_s32 = -3820;
  f_RegSumTarget_pcst->SumDeltaXX_s32 = 1985;
  f_RegSumTarget_pcst->SumDeltaYY_s32 = 1182624;
  f_RegSumTarget_pcst->SumDeltaXY_s32 = -376251;

  // Expected output
  f_RegSumTargetOutput_pcst->Num_u16 = 280;
  f_RegSumTargetOutput_pcst->Point1st_st.X_s16 = -8650;
  f_RegSumTargetOutput_pcst->Point1st_st.Y_s16 = 20684;
  f_RegSumTargetOutput_pcst->SumDeltaX_s32 = (96 - 4287) / 2;
  f_RegSumTargetOutput_pcst->SumDeltaY_s32 = (-3820 + 21925) / 2;
  f_RegSumTargetOutput_pcst->SumDeltaXX_s32 = (1985 + 620432) / 4;
  f_RegSumTargetOutput_pcst->SumDeltaYY_s32 = (1182624 + 16070205) / 4;
  f_RegSumTargetOutput_pcst->SumDeltaXY_s32 = (-376251 - 3149179) / 4;

  cout << "Test case 1\n";
}

void initExample1_TC2(rbp_Type_ehy_Regression_st* const f_RegSumToMerge_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTarget_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTargetOutput_pcst)
{
  // Inputs
  f_RegSumToMerge_pcst->Num_u16 = (unsigned short)5;
  f_RegSumToMerge_pcst->Point1st_st.X_s16 = (signed short)14780;
  f_RegSumToMerge_pcst->Point1st_st.Y_s16 = (signed short)-28652;
  f_RegSumToMerge_pcst->SumDeltaX_s32 = 68;
  f_RegSumToMerge_pcst->SumDeltaY_s32 = 99;
  f_RegSumToMerge_pcst->SumDeltaXX_s32 = 4153;
  f_RegSumToMerge_pcst->SumDeltaYY_s32 = 999;
  f_RegSumToMerge_pcst->SumDeltaXY_s32 = 6040;

  f_RegSumTarget_pcst->Num_u16 = (unsigned short)300;
  f_RegSumTarget_pcst->Point1st_st.X_s16 = (signed short)14652;
  f_RegSumTarget_pcst->Point1st_st.Y_s16 = (signed short)-28493;
  f_RegSumTarget_pcst->SumDeltaX_s32 = 565;
  f_RegSumTarget_pcst->SumDeltaY_s32 = 834;
  f_RegSumTarget_pcst->SumDeltaXX_s32 = 268235;
  f_RegSumTarget_pcst->SumDeltaYY_s32 = 637295;
  f_RegSumTarget_pcst->SumDeltaXY_s32 = 496288;

  // Expected output
  f_RegSumTargetOutput_pcst->Num_u16 = 305;
  f_RegSumTargetOutput_pcst->Point1st_st.X_s16 = 14652;
  f_RegSumTargetOutput_pcst->Point1st_st.Y_s16 = -28493;
  f_RegSumTargetOutput_pcst->SumDeltaX_s32 = (565 - 572) / 2;
  f_RegSumTargetOutput_pcst->SumDeltaY_s32 = (834 + 894) / 2;
  f_RegSumTargetOutput_pcst->SumDeltaXX_s32 = (268235 + 68665) / 4;
  f_RegSumTargetOutput_pcst->SumDeltaYY_s32 = (637295 + 158886) / 4;
  f_RegSumTargetOutput_pcst->SumDeltaXY_s32 = (496288 - 97580) / 4;

  cout << "Test case 2\n";
}

void initExample1_TC3(rbp_Type_ehy_Regression_st* const f_RegSumToMerge_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTarget_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTargetOutput_pcst)
{
  // Inputs
    f_RegSumToMerge_pcst->Num_u16 = (unsigned short)261;
  f_RegSumToMerge_pcst->Point1st_st.X_s16 = (signed short)14651;
  f_RegSumToMerge_pcst->Point1st_st.Y_s16 = (signed short)-28499;
  f_RegSumToMerge_pcst->SumDeltaX_s32 = 583;
  f_RegSumToMerge_pcst->SumDeltaY_s32 = 729;
  f_RegSumToMerge_pcst->SumDeltaXX_s32 = 252825;
  f_RegSumToMerge_pcst->SumDeltaYY_s32 = 639355;
  f_RegSumToMerge_pcst->SumDeltaXY_s32 = 500121;

  f_RegSumTarget_pcst->Num_u16 = (unsigned short)300;
  f_RegSumTarget_pcst->Point1st_st.X_s16 = (signed short)14652;
  f_RegSumTarget_pcst->Point1st_st.Y_s16 = (signed short)-28493;
  f_RegSumTarget_pcst->SumDeltaX_s32 = 565;
  f_RegSumTarget_pcst->SumDeltaY_s32 = 834;
  f_RegSumTarget_pcst->SumDeltaXX_s32 = 268235;
  f_RegSumTarget_pcst->SumDeltaYY_s32 = 637295;
  f_RegSumTarget_pcst->SumDeltaXY_s32 = 496288;

  // Expected output
  f_RegSumTargetOutput_pcst->Num_u16 = 561;
  f_RegSumTargetOutput_pcst->Point1st_st.X_s16 = 14652;
  f_RegSumTargetOutput_pcst->Point1st_st.Y_s16 = -28493;
  f_RegSumTargetOutput_pcst->SumDeltaX_s32 = (565 + 844);
  f_RegSumTargetOutput_pcst->SumDeltaY_s32 = (834 + 2295);
  f_RegSumTargetOutput_pcst->SumDeltaXX_s32 = (268235 + 254252);
  f_RegSumTargetOutput_pcst->SumDeltaYY_s32 = (637295 + 657499);
  f_RegSumTargetOutput_pcst->SumDeltaXY_s32 = (496288 + 505914);

  cout << "Test case 3\n";
}

void example1(rbp_Type_ehy_Regression_st* const f_RegSumToMerge_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTarget_pcst)
{
  const float l_xr_f32 = (float)f_RegSumToMerge_pcst->Point1st_st.X_s16;
  const float l_yr_f32 = (float)f_RegSumToMerge_pcst->Point1st_st.Y_s16;
  const float l_N_f32 = (float)f_RegSumToMerge_pcst->Num_u16;

  const float l_xbr_f32 = (float)f_RegSumTarget_pcst->Point1st_st.X_s16;
  const float l_ybr_f32 = (float)f_RegSumTarget_pcst->Point1st_st.Y_s16;

  const float l_Sxi_f32 = (l_N_f32 * l_xr_f32) - (float)f_RegSumToMerge_pcst->SumDeltaX_s32;
  const float l_Syi_f32 = (l_N_f32 * l_yr_f32) - (float)f_RegSumToMerge_pcst->SumDeltaY_s32;

  float l_NewSx_f32 = ((l_N_f32 * (l_xbr_f32 - l_xr_f32)) + (float)f_RegSumToMerge_pcst->SumDeltaX_s32);

  float l_NewSy_f32 = ((l_N_f32 * (l_ybr_f32 - l_yr_f32)) + (float)f_RegSumToMerge_pcst->SumDeltaY_s32);

  float l_NewSxx_f32 = (((l_N_f32 * (rbp_mtl_Square_mac(l_xbr_f32) - rbp_mtl_Square_mac(l_xr_f32)))
    - (2.f * (l_Sxi_f32 * (l_xbr_f32 - l_xr_f32))))
    + (float)f_RegSumToMerge_pcst->SumDeltaXX_s32);

  float l_NewSyy_f32 = ((l_N_f32 * (rbp_mtl_Square_mac(l_ybr_f32) - rbp_mtl_Square_mac(l_yr_f32)))
    - (2.f * (l_Syi_f32 * (l_ybr_f32 - l_yr_f32))))
    + (float)f_RegSumToMerge_pcst->SumDeltaYY_s32;

  float l_NewSxy_f32 = (((l_N_f32 * ((l_xbr_f32 * l_ybr_f32) - (l_xr_f32 * l_yr_f32)))
    - (l_Syi_f32 * (l_xbr_f32 - l_xr_f32)))
    - (l_Sxi_f32 * (l_ybr_f32 - l_yr_f32)))
    + (float)f_RegSumToMerge_pcst->SumDeltaXY_s32;

  const float l_TargetSx_f32 = (float)(f_RegSumTarget_pcst->SumDeltaX_s32) + l_NewSx_f32;
  const float l_TargetSy_f32 = (float)(f_RegSumTarget_pcst->SumDeltaY_s32) + l_NewSy_f32;
  const float l_TargetSxx_f32 = (float)(f_RegSumTarget_pcst->SumDeltaXX_s32) + l_NewSxx_f32;
  const float l_TargetSyy_f32 = (float)(f_RegSumTarget_pcst->SumDeltaYY_s32) + l_NewSyy_f32;
  const float l_TargetSxy_f32 = (float)(f_RegSumTarget_pcst->SumDeltaXY_s32) + l_NewSxy_f32;
  const unsigned short l_OldTargetNum_cu16 = f_RegSumTarget_pcst->Num_u16;

  f_RegSumTarget_pcst->SumDeltaX_s32 = (signed long)l_TargetSx_f32;
  f_RegSumTarget_pcst->SumDeltaY_s32 = (signed long)l_TargetSy_f32;
  f_RegSumTarget_pcst->SumDeltaXX_s32 = (signed long)l_TargetSxx_f32;
  f_RegSumTarget_pcst->SumDeltaYY_s32 = (signed long)l_TargetSyy_f32;
  f_RegSumTarget_pcst->SumDeltaXY_s32 = (signed long)l_TargetSxy_f32;
  f_RegSumTarget_pcst->Num_u16 += f_RegSumToMerge_pcst->Num_u16;
}

void checkOutputExample1(rbp_Type_ehy_Regression_st* const f_RegSumToMerge_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTarget_pcst,
  rbp_Type_ehy_Regression_st* const f_RegSumTargetOutput_pcst)
{
  if (f_RegSumTarget_pcst->Num_u16 != f_RegSumTargetOutput_pcst->Num_u16)
  {
    cout << "Different number of merged points expected\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->Num_u16 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->Num_u16 << "\n";
  }

  if (f_RegSumTarget_pcst->Point1st_st.X_s16 != f_RegSumTargetOutput_pcst->Point1st_st.X_s16)
  {
    cout << "Different base x-coordinate of merged regsum expected\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->Point1st_st.X_s16 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->Point1st_st.X_s16 << "\n";
  }

  if (f_RegSumTarget_pcst->Point1st_st.Y_s16  != f_RegSumTargetOutput_pcst->Point1st_st.Y_s16)
  {
    cout << "Different base y-coordinate of merged regsum expected\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->Point1st_st.Y_s16  << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->Point1st_st.Y_s16 << "\n";
  }

  if (f_RegSumTarget_pcst->SumDeltaX_s32  != f_RegSumTargetOutput_pcst->SumDeltaX_s32)
  {
    cout << "SumDeltaX_s32 not matching the expected value\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->SumDeltaX_s32 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->SumDeltaX_s32 << "\n";
  }

  if (f_RegSumTarget_pcst->SumDeltaY_s32  != f_RegSumTargetOutput_pcst->SumDeltaY_s32)
  {
    cout << "SumDeltaY_s32 not matching the expected value\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->SumDeltaY_s32 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->SumDeltaY_s32 << "\n";
  }

  if (f_RegSumTarget_pcst->SumDeltaXX_s32 != f_RegSumTargetOutput_pcst->SumDeltaXX_s32)
  {
    cout << "SumDeltaXX_s32 not matching the expected value\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->SumDeltaXX_s32 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->SumDeltaXX_s32 << "\n";
  }

  if (f_RegSumTarget_pcst->SumDeltaYY_s32  != f_RegSumTargetOutput_pcst->SumDeltaYY_s32)
  {
    cout << "SumDeltaYY_s32 not matching the expected value\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->SumDeltaYY_s32 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->SumDeltaYY_s32 << "\n";
  }

  if (f_RegSumTarget_pcst->SumDeltaXY_s32  != f_RegSumTargetOutput_pcst->SumDeltaXY_s32)
  {
    cout << "SumDeltaXY_s32 not matching the expected value\n";
    cout << "Expected: " << f_RegSumTargetOutput_pcst->SumDeltaXY_s32 << "\n";
    cout << "Actual: " << f_RegSumTarget_pcst->SumDeltaXY_s32 << "\n";
  }
}

int main()
{
  rbp_Type_ehy_Regression_st l_RegSumToMerge_st, l_RegSumTarget_st, l_RegSumTargetOutput_st;

  initExample1_TC2(&l_RegSumToMerge_st, &l_RegSumTarget_st, &l_RegSumTargetOutput_st);
  example1(&l_RegSumToMerge_st, &l_RegSumTarget_st);
  checkOutputExample1(&l_RegSumToMerge_st, &l_RegSumTarget_st, &l_RegSumTargetOutput_st);


  return 0;
}
