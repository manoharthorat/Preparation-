/*Write a module which uses module_init and module_exit macro */

//This header file is required by all kernel modules 
#include<linux/module.h>

//This header file is required for KERN_INFO
#include<linux/kernel.h>

//This HF is used for the macros 
#include<linux/init.h>

//This function gets called automatically when module gets loaded by insmod

//This function return 0 if successful execution otherwise it will return non zero value

static int __init demo_init(void)
{
	printk(KERN_INFO "Demo : Inserting Module2 \n");
return 0;
}

//This function gets called automatically when module gets removed from memoory by rmmod

static void __exit demo_exit(void)
{
	printk(KERN_INFO "Demo : Removing module 2\n");
}

//Register our init function 
module_init(demo_init);

//register our cleanup function 
module_exit(demo_exit);
