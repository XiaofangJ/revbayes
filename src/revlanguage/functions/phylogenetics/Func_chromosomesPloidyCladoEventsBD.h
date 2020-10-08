//
//  Func_chromosomesPloidyCladoEventsBD.h
//
//  Created by Will Freyman on 5/22/17.
//

#ifndef Func_chromosomesPloidyCladoEventsBD_H
#define Func_chromosomesPloidyCladoEventsBD_H


#include <string>
#include <iosfwd>
#include <vector>

#include "RlCladogeneticSpeciationRateMatrix.h"
#include "RlTypedFunction.h"
#include "CladogeneticSpeciationRateMatrix.h"
#include "DeterministicNode.h"
#include "DynamicNode.h"
#include "RevPtr.h"
#include "RlDeterministicNode.h"
#include "TypedDagNode.h"
#include "TypedFunction.h"

namespace RevLanguage {
class ArgumentRules;
class TypeSpec;
    
    class Func_chromosomesPloidyCladoEventsBD : public TypedFunction<CladogeneticSpeciationRateMatrix> {
        
    public:
        Func_chromosomesPloidyCladoEventsBD( void );
        

        Func_chromosomesPloidyCladoEventsBD*                                            clone(void) const;              //!< Clone the object
        static const std::string&                                                       getClassType(void);             //!< Get Rev type
        static const TypeSpec&                                                          getClassTypeSpec(void);         //!< Get class type spec
        std::string                                                                     getFunctionName(void) const;    //!< Get the primary name of the function in Rev
        const TypeSpec&                                                                 getTypeSpec(void) const;        //!< Get the type spec of the instance
        

        RevBayesCore::TypedFunction< RevBayesCore::CladogeneticSpeciationRateMatrix>*   createFunction(void) const;     //!< Create internal function object
        const ArgumentRules&                                                            getArgumentRules(void) const;   //!< Get argument rules
        
    };
    
}




#endif
