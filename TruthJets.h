#ifndef TruthJets_h
#define TruthJets_h


#include <vector>


class TruthJets
{  
 private :
 

  float _E;
  float _px;
  float _py;
  float _pz;
  float _m;
  float _pt;
  float _eta;
  float _rap;
  float _phi;
  bool _btag;


 public :

  void Set_E ( const float & V_E) 	               {_E=V_E;};
  void Set_Px( const float & V_Px)                     {_px=V_Px;};
  void Set_Py( const float & V_Py)                     {_py=V_Py;};
  void Set_Pz( const float & V_Pz)                     {_pz=V_Pz;};
  void Set_M( const float & V_M)                       {_m=V_M;};
  void Set_Pt( const float & V_Pt)                     {_pt=V_Pt;};
  void Set_Eta( const float & V_Eta)                   {_eta=V_Eta;};
  void Set_Rap( const float & V_Rap)                   {_rap=V_Rap;};
  void Set_Phi( const float & V_Phi)                   {_phi=V_Phi;};
  void Set_Btag( const bool & V_Btag)                  {_btag=V_Btag;};
 

  float E() const           {return _E;};
  float Px() const          {return _px;};
  float Py() const          {return _py;};
  float Pz() const          {return _pz;};
  float M() const           {return _m;};
  float Pt() const          {return _pt;};
  float Eta() const         {return _eta;};
  float Rap() const         {return _rap;};
  float Phi() const         {return _phi;};
  bool Btag() const         {return _btag ;};


  TruthJets(const float &E=0,
	    const float &Px=0,
	    const float &Py=0,
	    const float &Pz=0,
	    const float &M=0,
	    const float &Pt=0,
	    const float &Eta=0,
	    const float &Rap=0,
	    const float &Phi=0,
	    const bool &Btag =0
     )
  {  
    Set(E,
	Px,
	Py,
	Pz,
	M,
	Pt,
	Eta,
	Rap,
	Phi,
        Btag); 
  }
  
  
  void Set(const float &E,
	   const float &Px,
	   const float &Py,
	   const float &Pz,
	   const float &M,
	   const float &Pt,
	   const float &Eta,
	   const float &Rap,
	   const float &Phi,
           const bool &Btag
	   )
  { _E=E;
    _px=Px;
    _py=Py;
    _pz=Pz;
    _m=M;
    _pt=Pt;
    _eta=Eta;
    _rap=Rap;
    _phi=Phi;
    _btag=Btag;
  }	
};


#endif
