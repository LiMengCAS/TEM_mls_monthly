/* *************************************************************
TELMNTCOHORT45.HPP - Container class to hold land cover cohort
                      characteristics
************************************************************* */

#ifndef ELMNTCOHORT45_H
#define ELMNTCOHORT45_H

#include "temconsts45.hpp"
#include "bioms45.hpp"

struct ElmntCohort45
{
  // Index for agricultural crop type used for
  //   parameterization
  int agcmnt;

  // Number of growing degree days in croplands
  double aggrowdd;

  // Current value of decomposition parameter in croplands
  double agkdc;
  /*
  double agkdam;
  double agkdmn;
  */
   
  // Index to indicate whether cohort was in
  //   agriculture during the previous year
//  int agprevstate;

  int agprvstate;

  // Index to indicate whether cohort is in
  //   agriculture during the current year
  int agstate;

  double avlh2o;
  double awcapmm;

  double c2n;

  // Area covered by cohort (square kilometers)
  //   during current year
  long chrtarea;

  // Index for vegetation community type used for
  //   parameterization
  int cmnt;

  double cneven;

  Biomass convrtflx;

  double cropprvleafmx;

  Biomass cropResidue;

  double croptopt;

  // Index for current vegetation type
  int currentveg;

  int distmnthcnt;
  int disturbflag;
  int disturbmonth;

  // Index to indicate if crops are fertilized (= 1)
  //   or not (= 0)
  int fertflag;

  int firemnthcnt;

  Biomass formPROD10;
  Biomass formPROD100;

  // Fire return interval
  int FRI;

  Biomass initPROD1[CYCLE];
  Biomass initPROD10[10];
  Biomass initPROD100[100];

 // Index to indicate if crops are irrigated (= 1)
  //   or not (= 0)
  int irrgflag;

  // Current value of decomposition parameter in
  //   natural ecosystems
  double kdc;
  /*
  double kdam;
  double kdmn;
  */
   
  double natprvleafmx;
  double natseedC;
  double natseedSTRN;
  double natseedSTON;
  double natsoil;
  double nattopt;

  double newleafmx;

  double newtopt;

  double nretent;
  double nsretent;
  double nsretent_active;
  double nsretent_slow;
  double nsretent_passive; 
 
 double nvretent;

  int potveg;

  // Air temperature that occurred 2 months ago
  double prev2tair;

  // Atmospheric CO2 concentration during the previous month
  double prevco2;

  Biomass prevCropResidue;

  Biomass prevPROD1;
  Biomass prevPROD10;
  Biomass prevPROD100;

//  Previous P-E
  double prvpme;
  // Snowpack during the previous month
  double prevspack;

  // Air temperature of the previous month
  double prevtair;

  // Value of y[] during previous time step
  double prevy[MAXSTATE];

  double prod10par;

  double prod100par;

  int productYear;

  // Area covered by cohort (square kilometers)
  //   during previous year
  long prvchrtarea;

  // Crop net primary production during the previous month
  double prvcropnpp;

  double rprec;
  double rdemandc;
  double rdemandn;
  double rlabilec;
  double rlabilen;
  
  double rgpp;
  double ringpp;
  
  double rnpp;
  double rtair;
  double rtairphi;
  double rphi;
  double phicnt;
  double rltrc;
  double rrh;
  double rpleaf;
  double reet;

  int qc;

  double sconvert;

  Biomass sconvrtflx;
  Biomass sconvrtflx_active;
  Biomass sconvrtflx_slow;
  Biomass sconvrtflx_passive;

  Biomass slash;

  double slashpar;

  // Source cohort for current cohort
  int srcCohort;

  // Age of cohort
  int standage;

  int subtype;

  int tillflag;

  double topt;
  double toptmic;

  int tqc;

  double vconvert;

  Biomass vconvrtflx;

  double vrespar;

  // Wilting point
//  double wiltpt;

  double y[MAXSTATE];

  double yrltrc;
  double yrltrn;
  
  double yrpleaf;
  double yrpsapwood;
  double yrproot;
  
  double yralloclc;
  double yrallocsc;
  double yrallocrc;
  
  double yrrmleaf;
  double yrrmsapwood;
  double yrrmroot;

};

#endif
