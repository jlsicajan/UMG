/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ventana.h
 * Author: sicajan
 *
 * Created on 19 de mayo de 2017, 01:08 AM
 */

#ifndef VENTANA_H
#define VENTANA_H

class ventana : public wxApp
{
    public:
        virtual bool OnInit();
};
DECLARE_APP(ventana)


#endif /* VENTANA_H */

