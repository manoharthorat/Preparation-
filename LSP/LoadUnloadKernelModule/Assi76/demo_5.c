/*Write a kernel module which accept integer value as a command line argument*/

//This header file is required by all kernel module 
#include<linux/module.h>

//This header file is required for KERN_INFO
#include<linux/kernel.h>

//This header file requires macros 
#include<linux/init.h>

//This header file is used to get the information about the parameter
#include<linux/moduleparam.h>
#include<linux/stat.h>

//Macro for name of the author 
#define DRIVER_AUTHOR "Manohar Thorat"

//Module description
#define DRIVER_DESC "Demo Module with command line arguments"

int myint = 21;

/*This macro is used to register infirmation about the input arguments 
 First paramenter is the name of parameter 
 Second paramenter is its type 
 Thired parameter is its permision 
 */

module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

MODULE_PARM_DESC(myint, "Interger Variable");

static int __init demo_5_init(void)
{
	printk(KERN_INFO "Demo value %d \n",myint);
	return 0;
}

static void __exit demo_5_exit(void)
{
	printk(KERN_INFO "Demo removing module \n");
}

module_init(demo_5_init);
module_exit(demo_5_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);




