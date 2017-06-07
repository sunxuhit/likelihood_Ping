//////*********************************//////
//////***** Author: Dr. Liang Xue *****//////
//////******  Date: 01/06/2015  *******//////
//////*********************************//////

// This class is to define the photonsensor
// materials for EIC RICH detector


#include "../include/material.h"

material::material()
{
  /// Quantum Efficiency for Bialkali (%)
  double photon_wl_SbKCs[70]={258.71, 264.25, 269.78, 273.47, 275.32, 277.16, 279.00, 282.70, 284.54, 286.39,
			      288.24, 291.93, 295.62, 299.34, 306.69, 312.23, 323.30, 334.37, 345.44, 358.36,
			      406.34, 413.73, 424.80, 430.33, 437.72, 445.10, 452.48, 461.71, 469.10, 480.16,
			      487.54, 494.93, 504.15, 511.53, 517.07, 522.61, 526.30, 529.99, 531.83, 537.37,
			      541.06, 546.60, 552.13, 557.67, 565.05, 572.43, 581.66, 587.20, 592.73, 598.27,
			      603.81, 607.50, 611.19, 614.88, 618.57, 622.26, 627.80, 629.64, 633.33, 637.02,
			      640.72, 646.25, 651.79, 655.48, 659.17, 662.86, 666.55, 670.24, 673.93, 677.62 };
  double QE_SbKCs[70] = {1.97 , 2.96 , 3.91 , 4.94 , 5.97 , 6.91 , 7.99 , 8.85 , 9.95 , 10.71,
			 12.0 , 13.33, 15.20, 16.59, 18.65, 19.77, 21.58, 22.88, 24.61, 24.97,
			 25.34, 24.97, 24.25, 23.90, 23.21, 22.55, 21.58, 20.35, 19.20, 17.59,
			 16.35, 15.65, 14.76, 13.92, 13.33, 12.39, 11.35, 10.40, 9.66 , 8.60,
			 7.76 , 7.01 , 6.14 , 5.63 , 5.01 , 4.39 , 3.74 , 3.43 , 3.00 , 2.75,
			 2.38 , 2.15 , 1.91 , 1.70 , 1.51 , 1.31 , 1.10 , 0.99 , 0.87 , 0.75,
			 0.65 , 0.52 , 0.39 , 0.35 , 0.30 , 0.25 , 0.21 , 0.17 , 0.13 , 0.11 };
  
  for(int i=0; i<70; i++){
    std::pair<double, double> tmp (photon_wl_SbKCs[i], QE_SbKCs[i]);
    SbKCs.push_back(tmp);
  }
  
  
  /// Quantum Efficiency for GaAsP (%)
  double photon_wl_GaAsP[62]={360.21, 362.05, 363.90, 365.74, 367.59, 369.44, 371.28, 376.82, 380.51, 386.04,
			      389.74, 393.43, 400.81, 406.34, 411.88, 417.42, 426.64, 437.72, 450.63, 459.86,
			      470.93, 485.70, 498.62, 518.92, 542.91, 555.83, 570.59, 579.82, 590.89, 600.12,
			      609.34, 618.57, 625.95, 631.49, 637.02, 642.56, 648.10, 653.63, 659.17, 662.86,
			      666.55, 670.24, 675.78, 679.47, 681.32, 683.16, 686.85, 688.70, 690.54, 694.23,
			      696.08, 697.92, 699.77, 701.62, 705.31, 707.15, 710.84, 712.69, 714.53, 716.38,
			      718.22, 720.07 };
  double QE_GaAsP[62] = { 0.39 , 0.59 , 1.37 , 1.97 , 2.96 , 4.33 , 5.88 , 7.54 , 9.39 , 12.94,
			  16.59, 19.77, 24.97, 29.32, 32.48, 37.04, 39.27, 41.63, 44.13, 46.11,
			  47.48, 48.89, 49.61, 49.61, 48.18, 47.48, 46.11, 44.79, 43.50, 42.25,
			  40.44, 38.70, 37.04, 35.46, 33.94, 32.48, 31.09, 29.76, 28.07, 26.86,
			  25.71, 24.25, 22.55, 21.27, 19.77, 18.38, 15.88, 14.13, 12.94, 10.55,
			  8.35 , 7.01 , 6.06 , 5.16 , 4.46 , 3.97 , 3.33 , 1.75 , 1.20 , 0.81,
			  0.51 , 0.37 };
  
  for(int i=0; i<62; i++){
    std::pair<double, double> tmp (photon_wl_GaAsP[i], QE_GaAsP[i]);
    GaAsP.push_back(tmp);
  }
  
  
  
  /// Quantum Efficiency for GaAs (%)
  double photon_wl_GaAs[63]={ 380.51, 382.35, 384.20, 386.04, 389.74, 393.43, 397.12, 400.81, 404.50, 410.03,
			      413.73, 419.26, 424.80, 426.64, 432.18, 437.72, 443.25, 454.33, 463.55, 474.63,
			      482.01, 491.23, 500.46, 507.84, 515.23, 531.83, 555.83, 600.11, 697.92, 764.36,
			      799.42, 817.88, 828.95, 840.02, 845.56, 851.10, 858.48, 864.01, 867.71, 871.40,
			      875.09, 876.93, 880.62, 882.47, 884.31, 886.16, 888.01, 889.85, 891.70, 893.54,
			      895.39, 897.23, 899.08, 900.92, 904.61, 906.46, 908.30, 910.15, 912.00, 913.84,	
			      915.69, 917.53, 919.38 };
  
  double QE_GaAs[63] = { 0.93 , 1.08 , 1.39 , 1.72 , 2.34 , 2.96 , 3.53 , 4.02 , 4.94 , 5.97,
			 6.91 , 7.99 , 9.12 , 9.95 , 11.02, 12.39, 13.33, 14.98, 16.11, 18.11,
			 19.20, 20.35, 21.27, 22.22, 22.88, 23.56, 24.25, 24.97, 24.97, 23.90,
			 23.21, 22.88, 22.55, 21.58, 20.65, 19.77, 18.92, 17.33, 15.88, 14.34,
			 12.94, 11.69, 10.86, 9.81 , 8.85 , 7.99 , 6.91 , 6.15 , 4.94 , 3.80,
			 3.05 , 2.31 , 1.70 , 1.33 , 1.11 , 1.00 , 0.91 , 0.77 , 0.59 , 0.49,
			 0.30 , 0.20 , 0.11 };
  
  for(int i=0; i<63; i++){
    std::pair<double, double> tmp (photon_wl_GaAs[i], QE_GaAs[i]);
    GaAs.push_back(tmp);
  }
  
}

double material::extrapQE_SbKCs(double wl)
{
  double QE = -999.;
  
  int iBin = -1;
  for(unsigned int i=0; i<SbKCs.size()-1; i++){
    if(wl>=SbKCs.at(i).first && wl<SbKCs.at(i+1).first){
      iBin = i;
      break;
    }
  }
  if(iBin>=0 && iBin<SbKCs.size()){
    double x1 = SbKCs.at(iBin).first;
    double x2 = SbKCs.at(iBin+1).first;
    double y1 = SbKCs.at(iBin).second;
    double y2 = SbKCs.at(iBin+1).second;
    QE = y1 + (wl-x1)*(y2-y1)/(x2-x1);
  }
  
  if(QE>0.) return QE/100.;
  else return 0;
}

double material::extrapQE_GaAsP(double wl)
{
  double QE = -999.;
  
  int iBin = -1;
  for(unsigned int i=0; i<GaAsP.size()-1; i++){
    if(wl>=GaAsP.at(i).first && wl<GaAsP.at(i+1).first){
      iBin = i;
      break;
    }
  }
  if(iBin>=0 && iBin<GaAsP.size()){
    double x1 = GaAsP.at(iBin).first;
    double x2 = GaAsP.at(iBin+1).first;
    double y1 = GaAsP.at(iBin).second;
    double y2 = GaAsP.at(iBin+1).second;
    QE = y1 + (wl-x1)*(y2-y1)/(x2-x1);
  }
  if(QE>0.) return QE/100.;
  else return 0;
}

double material::extrapQE_GaAs(double wl)
{
  double QE = -999.;
  
  int iBin = -1;
  for(unsigned int i=0; i<GaAs.size()-1; i++){
    if(wl>=GaAs.at(i).first && wl<GaAs.at(i+1).first){
      iBin = i;
      break;
    }
  }
  if(iBin>=0 && iBin<GaAs.size()){
    double x1 = GaAs.at(iBin).first;
    double x2 = GaAs.at(iBin+1).first;
    double y1 = GaAs.at(iBin).second;
    double y2 = GaAs.at(iBin+1).second;
    QE = y1 + (wl-x1)*(y2-y1)/(x2-x1);
  }
  if(QE>0.) return QE/100.;
  else return 0;
}
