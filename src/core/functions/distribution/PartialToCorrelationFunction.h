/**
 * @file
 * This file contains the declaration of the variance-covariance matrix function class.
 * This class is derived from the TypedFunction<MatrixReal> class and is used to
 * compute the variance-covariance matrix from the standard deviations and correlation
 * coefficients.
 *
 * @brief Declaration of the variance-covariance matrix function.
 *
 * (c) Copyright 2009- under GPL version 3
 * @date Last modified: $Date$
 * @author The RevBayes Development Core Team
 * @license GPL version 3
 * @version 1.0
 * @since 2012-07-06, version 1.0
 * @interface Function
 *
 * $Id$
 */



#ifndef PartialToCorrelation_H
#define PartialToCorrelation_H

#include "MatrixReal.h"
#include "TypedFunction.h"

namespace RevBayesCore {
class DagNode;
template <class valueType> class TypedDagNode;
    
    class PartialToCorrelation : public TypedFunction<MatrixReal> {
        
    public:
        PartialToCorrelation(const TypedDagNode< MatrixReal > *pc);
        virtual                                            ~PartialToCorrelation(void);                                //!< Virtual destructor
        
        // public member functions
        PartialToCorrelation*               clone(void) const;                                               //!< Create an independent clone
        void                                                update(void);
        
    protected:
        void                                                swapParameterInternal(const DagNode *oldP, const DagNode *newP); //!< Implementation of swaping parameters
        
    private:
        
        // members
        const TypedDagNode< MatrixReal >*                   partial_correlations;
        
    };
    
}

#endif
