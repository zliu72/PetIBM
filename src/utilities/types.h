/***************************************************************************//**
 * \file types.h
 * \author Anush Krishnan (anush@bu.edu)
 * \brief Definition of enumerated types.
 */


#if !defined(TYPES_H)
#define TYPES_H


/**
 * \brief Type of boundary condition.
 */
enum BCType
{
  DIRICHLET,  ///< Dirichlet
  NEUMANN,    ///< Neumann
  CONVECTIVE, ///< Convective
  PERIODIC    ///< Periodic
};

/**
 * \brief The boundary of concern.
 */
enum BoundaryLocation
{
  XMINUS, ///< left
  XPLUS,  ///< right
  YMINUS, ///< bottom
  YPLUS,  ///< top
  ZMINUS, ///< front
  ZPLUS   ///< back
};

/**
 * \brief Numerical scheme used to discretize the time derivative.
 *
 * A time-dependent differential equation of the form
 * \f[ \frac{du}{dt} = f(u) \f]
 * can be solved numerically using any of the schemes listed below. In the
 * following, the size of the time step is represented by \f$ \Delta t \f$, the
 * value of \f$ u \f$ at the current time step is represented by \f$ u^n \f$, 
 * and the value at the next time step (which we want to determine) is
 * \f$ u^{n+1} \f$. \f$ u^{n-1} \f$ is the value at the previous time step.
 */
enum TimeScheme
{
  EULER_EXPLICIT,    ///< explicit Euler method
  EULER_IMPLICIT,    ///< implicit Euler method
  ADAMS_BASHFORTH_2, ///< second-order Adams-Bashforth scheme
  CRANK_NICOLSON     ///< Crank-Nicolson scheme
};

/**
 * \brief Immersed boundary method used to solve the flow.
 */
enum SolverType
{
  NAVIER_STOKES,  ///< no immersed bodies
  TAIRA_COLONIUS  ///< immersed boundary projection method (Taira & Colonius, 2007)
};

/**
 * \brief Type of preconditioner.
 */
enum PreconditionerType
{
  NONE,                ///< no preconditioner
  DIAGONAL,            ///< diagonal preconditioner
  SMOOTHED_AGGREGATION ///< smoothed-aggregation preconditioner
};

#endif

/**
 * \class PetscInt
 * \brief PETSc type that represents an integer.
 * \sa http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscInt.html
 */

/**
 * \class PetscReal
 * \brief PETSc type that represents a real number.
 * \sa http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscReal.html
 */

/**
 * \class PetscBool
 * \brief PETSc type that represents a logical variable.
 * \sa http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscBool.html
 */

/**
 * \class PetscErrorCode
 * \brief PETSc type used to return the error code from a function.
 * \sa http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscErrorCode.html
 */

/**
 * \var EULER_EXPLICIT
 * \f[ \frac{u^{n+1}-u^n}{\Delta t} = f(u^n) \f]
 */

/**
 * \var EULER_IMPLICIT
 * \f[ \frac{u^{n+1}-u^n}{\Delta t} = f(u^{n+1}) \f]
 */

/**
 * \var ADAMS_BASHFORTH_2
 * \f[ \frac{u^{n+1}-u^n}{\Delta t} = \frac{3}{2}f(u^n) - \frac{1}{2}f(u^{n-1}) \f]
 */

/**
 * \var CRANK_NICOLSON
 * \f[ \frac{u^{n+1}-u^n}{\Delta t} = \frac{1}{2}\left(f(u^{n+1}) + f(u^n)\right) \f]
 */

/**
 * \var NAVIER_STOKES
 * Solve the incompressible Navier-Stokes equations in the domain without the
 * presence of any immersed boundaries. The method used is the fractional step
 * method as formulated in the paper by Blair Perot
 * <a href="http://dx.doi.org/10.1006/jcph.1993.1162">(J. Comput. Phys, 108.1, 1993)</a>
 */

/**
 * \var TAIRA_COLONIUS
 * Solve the flow using the immersed boundary projection method proposed by
 * Taira and Colonius
 * <a href="http://dx.doi.org/10.1016/j.jcp.2007.03.005">(J. Comput. Phys, 225.2, 2007)</a>
 */