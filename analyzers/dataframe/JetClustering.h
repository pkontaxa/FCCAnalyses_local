
#ifndef  JETCLUSTERING_ANALYZERS_H
#define  JETCLUSTERING_ANALYZERS_H

#include <cmath>
#include <vector>

#include "TLorentzVector.h"
#include "ROOT/RVec.hxx"
#include "edm4hep/MCParticleData.h"
#include "edm4hep/ParticleIDData.h"
#include "edm4hep/Vector3f.h"
#include "edm4hep/Vector3d.h"
#include "edm4hep/Vector2i.h"


#include "fastjet/AreaDefinition.hh"
#include "fastjet/ClusterSequence.hh"
#include "fastjet/ClusterSequenceArea.hh"
#include "fastjet/JetDefinition.hh"

#include "JetClusteringUtils.h"

/** Jet clustering interface. 
This represents a set functions and utilities to perfom jet clustering from a list of.  
*/

namespace JetClustering{

  /** @name JetClustering
   *  Jet clustering interface. 
   This represents a set functions and utilities to perfom jet clustering from a list of. 
  */
  ///@{
  
  ///Jet Clustering interface for kt
  struct clustering_kt {
    clustering_kt (float arg_radius, int arg_exclusive, float arg_cut, int arg_sorted);
    
    float m_radius = 0.5; ///< jet cone radius
    int   m_exclusive = 0; ///< flag for exclusive jet clustering. Possible choices are 0=inclusive clustering, 1=exclusive clustering that would be obtained when running the algorithm with the given dcut, 2=exclusive clustering when the event is clustered (in the exclusive sense) to exactly njets, 3=exclusive clustering when the event is clustered (in the exclusive sense) up to exactly njets, 4=exclusive jets obtained at the given ycut 
    float m_cut = 5.; ///< pT cut for m_exclusive=0, dcut for m_exclusive=1, N jets for m_exlusive=2, N jets for m_exclusive=3, ycut for m_exclusive=4
    int m_sorted = 0; ///< pT ordering=0, E ordering=1
    JetClusteringUtils::FCCAnalysesJet  operator() (std::vector<fastjet::PseudoJet>);
  };
  

  ///Jet Clustering interface for antikt
  struct clustering_antikt {
    clustering_antikt (float arg_radius, int arg_exclusive, float arg_cut, int arg_sorted);
    
    float m_radius = 0.5; ///< jet cone radius
    int   m_exclusive = 0; ///< flag for exclusive jet clustering. Possible choices are 0=inclusive clustering, 1=exclusive clustering that would be obtained when running the algorithm with the given dcut, 2=exclusive clustering when the event is clustered (in the exclusive sense) to exactly njets, 3=exclusive clustering when the event is clustered (in the exclusive sense) up to exactly njets, 4=exclusive jets obtained at the given ycut 
    float m_cut = 5.; ///< pT cut for m_exclusive=0, dcut for m_exclusive=1, N jets for m_exlusive=2, N jets for m_exclusive=3, ycut for m_exclusive=4
    int m_sorted = 0; ///< pT ordering=0, E ordering=1
    JetClusteringUtils::FCCAnalysesJet  operator() (std::vector<fastjet::PseudoJet>);
  };
  

  ///Jet Clustering interface for Cambridge
  struct clustering_cambridge {
    clustering_cambridge (float arg_radius, int arg_exclusive, float arg_cut, int arg_sorted);
    
    float m_radius = 0.5; ///< jet cone radius
    int   m_exclusive = 0; ///< flag for exclusive jet clustering. Possible choices are 0=inclusive clustering, 1=exclusive clustering that would be obtained when running the algorithm with the given dcut, 2=exclusive clustering when the event is clustered (in the exclusive sense) to exactly njets, 3=exclusive clustering when the event is clustered (in the exclusive sense) up to exactly njets, 4=exclusive jets obtained at the given ycut 
    float m_cut = 5.; ///< pT cut for m_exclusive=0, dcut for m_exclusive=1, N jets for m_exlusive=2, N jets for m_exclusive=3, ycut for m_exclusive=4
    int m_sorted = 0; ///< pT ordering=0, E ordering=1
    JetClusteringUtils::FCCAnalysesJet  operator() (std::vector<fastjet::PseudoJet>);
  };

  ///Jet Clustering interface for ee_kt
  struct clustering_ee_kt {
    clustering_ee_kt (int arg_exclusive, float arg_cut, int arg_sorted);
    
    int   m_exclusive = 0; ///< flag for exclusive jet clustering. Possible choices are 0=inclusive clustering, 1=exclusive clustering that would be obtained when running the algorithm with the given dcut, 2=exclusive clustering when the event is clustered (in the exclusive sense) to exactly njets, 3=exclusive clustering when the event is clustered (in the exclusive sense) up to exactly njets, 4=exclusive jets obtained at the given ycut 
    float m_cut = 5.; ///< pT cut for m_exclusive=0, dcut for m_exclusive=1, N jets for m_exlusive=2, N jets for m_exclusive=3, ycut for m_exclusive=4
    int m_sorted = 0; ///< pT ordering=0, E ordering=1
    JetClusteringUtils::FCCAnalysesJet  operator() (std::vector<fastjet::PseudoJet>);
  };


  ///Jet Clustering interface for eekt
  struct clustering_ee_genkt {
    clustering_ee_genkt (int arg_exclusive, float arg_cut, int arg_sorted);
    
    float m_radius = 0.5; ///< jet cone radius
    int   m_exclusive = 0; ///< flag for exclusive jet clustering. Possible choices are 0=inclusive clustering, 1=exclusive clustering that would be obtained when running the algorithm with the given dcut, 2=exclusive clustering when the event is clustered (in the exclusive sense) to exactly njets, 3=exclusive clustering when the event is clustered (in the exclusive sense) up to exactly njets, 4=exclusive jets obtained at the given ycut 
    float m_cut = 5.; ///< pT cut for m_exclusive=0, dcut for m_exclusive=1, N jets for m_exlusive=2, N jets for m_exclusive=3, ycut for m_exclusive=4
    int m_sorted = 0; ///< pT ordering=0, E ordering=1
    JetClusteringUtils::FCCAnalysesJet  operator() (std::vector<fastjet::PseudoJet>);
  };
  ///@}
}


#endif
