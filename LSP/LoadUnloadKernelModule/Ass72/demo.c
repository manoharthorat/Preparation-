/*Write the kernel module which prints its loading and unloading information in kernel log file */

//This header file is required for all kernel module 
#include<linux/module.h>

//This header file is required for KERN_INFO
#include<linux/kernel.h>

//This function gets called automatically when module gets loaded by insmod

//This function returns 0 if it successfully executed otherwise it returns non zero value

int init_module(void)
{
	printk(KERN_INFO "Marvollous Infosystem : Initialization\n");
	return 0;
}


//This function gets called automatically when module gets removed from memory by rmmod

void cleanup_module(void)
{
	printk(KERN_INFO "Marvollous Infosystem :  Module Removed\n");
}

// All the information which is printed by printk function is available in /var/log/syslog file 
