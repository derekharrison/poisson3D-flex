/*
 * boundary_functions.c
 *
 *  Created on: Oct 25, 2018
 *      Author: derek
 */

#include <math.h>

/*-----------------------------------------------------------------------------------------------*/
double boundary_west(double y, double z)
{
    /*
     * Specify the west face boundary distribution for the Poisson equation
     * equation.
     * If the boundary is of type DIRICHLET, specify the distribution at the boundary. If the boundary
     * is of type NEUMANN specify the flux distribution at the boundary.
     *
     * The distribution or flux distribution is of the form f(y,z).
     *
     * input    y
     * input    z
     *
     * return   f
     */

    double f = 0.0;

    return f;

}


/*-----------------------------------------------------------------------------------------------*/
double boundary_east(double y, double z)
{
    /*
     * Specify the east face boundary distribution for the Poisson equation
     * equation.
     * If the boundary is of type DIRICHLET, specify the distribution at the boundary. If the boundary
     * is of type NEUMANN specify the flux distribution at the boundary.
     *
     * The distribution or flux distribution is of the form f(y,z).
     *
     * input    y
     * input    z
     *
     * return   f
     */

    double f = 0.0;

    return f;

}


/*-----------------------------------------------------------------------------------------------*/
double boundary_south(double x,double z)
{
    /*
     * Specify the south face boundary distribution for the Poisson equation
     * equation.
     * If the boundary is of type DIRICHLET, specify the distribution at the boundary. If the boundary
     * is of type NEUMANN specify the flux distribution at the boundary.
     *
     * The distribution or flux distribution is of the form f(x,z).
     *
     * input    x
     * input    z
     *
     * return   f
     */

    double f = 0.0;

    return f;

}


/*-----------------------------------------------------------------------------------------------*/
double boundary_north(double x,double z)
{
    /*
     * Specify the north face boundary distribution for the Poisson equation
     * equation.
     * If the boundary is of type DIRICHLET, specify the distribution at the boundary. If the boundary
     * is of type NEUMANN specify the flux distribution at the boundary.
     *
     * The distribution or flux distribution is of the form f(x,z).
     *
     * input    x
     * input    z
     *
     * return   f
     */

    double f = 0.0;

    return f;

}


/*-----------------------------------------------------------------------------------------------*/
double boundary_bottom(double x,double y)
{
    /*
     * Specify the bottom face boundary distribution for the Poisson equation
     * equation.
     * If the boundary is of type DIRICHLET, specify the distribution at the boundary. If the boundary
     * is of type NEUMANN specify the flux distribution at the boundary.
     *
     * The distribution or flux distribution is of the form f(x,y).
     *
     * input    x
     * input    y
     *
     * return   f
     */

    double f = 0.0;

    return f;

}


/*-----------------------------------------------------------------------------------------------*/
double boundary_top(double x,double y)
{
    /*
     * Specify the top face boundary distribution for the Poisson equation
     * equation.
     * If the boundary is of type DIRICHLET, specify the distribution at the boundary. If the boundary
     * is of type NEUMANN specify the flux distribution at the boundary.
     *
     * The distribution or flux distribution is of the form f(x,y).
     *
     * input    x
     * input    y
     *
     * return   f
     */

    double f = 0.0;

    return f;

}


/*-----------------------------------------------------------------------------------------------*/
double source_equation(double x, double y, double z)
{
    /*
     * Specify the source equation for the transient heat conduction equation:
     *
     * gammax*d2T/dx2 + gammay*d2T/dy2 + gammaz*d2T/dz2 + q(x,y,z) = rho*Cp*dT/dt
     *
     * The source equation is of the form q(x,y,z).
     *
     * input    x
     * input    y
     * input    z
     *
     * return   q
     */

    double q = -sin(M_PI*x) * sin(M_PI*y) * sin(M_PI*z);

    return q;

}
