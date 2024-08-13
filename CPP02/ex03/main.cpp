/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:02:36 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 16:42:58 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void testBSP(Point a, Point b, Point c, Point p) {
    bool inside = bsp(a, b, c, p);
    std::cout << "Triangle vertices: (" << a.getX().toFloat() << ", " << a.getY().toFloat() << "), ("
              << b.getX().toFloat() << ", " << b.getY().toFloat() << "), ("
              << c.getX().toFloat() << ", " << c.getY().toFloat() << ")\n";
    std::cout << "Point to test: (" << p.getX().toFloat() << ", " << p.getY().toFloat() << ")\n";
    std::cout << "Point is " << (inside ? "inside" : "outside") << " the triangle.\n\n";
}

int main() {
    // Définir les sommets du triangle
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);

    // Points à tester
    Point insidePoint(1.0f, 1.0f);   // À l'intérieur du triangle
    Point outsidePoint(6.0f, 1.0f);  // À l'extérieur du triangle, à droite
    Point edgePoint(2.5f, 0.0f);     // Sur une arête (AB)
    Point vertexPoint(0.0f, 0.0f);   // Sur un sommet (A)

    // Tester différents cas
    testBSP(a, b, c, insidePoint);
    testBSP(a, b, c, outsidePoint);
    testBSP(a, b, c, edgePoint);
    testBSP(a, b, c, vertexPoint);

    // Ajouter des tests avec différents triangles et points
    Point d(1.0f, 1.0f);
    Point e(6.0f, 1.0f);
    Point f(1.0f, 6.0f);
    
    Point newInside(2.0f, 2.0f);    // À l'intérieur du nouveau triangle
    Point newOutside(0.0f, 7.0f);   // À l'extérieur du nouveau triangle
    Point newEdge(1.0f, 3.0f);      // Sur une arête du nouveau triangle

    testBSP(d, e, f, newInside);
    testBSP(d, e, f, newOutside);
    testBSP(d, e, f, newEdge);

    return 0;
}
