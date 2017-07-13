/*write a kernel module which contains name of license, name of author and the short discription about the modu;e */

#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

#define DRIVER_AUTHOR "Manohar Thorat"
#define DRIVER_DESC "Demo module which contains the information of module"

static int __init init_demo_4(void)
{
	printk(KERN_INFO "Demo : Module loading.... \n");
	return 0;
}

static void __exit exit_demo_4(void)
{
	printk(KERN_INFO "Demo : Module removed... \n" );
}

module_init(init_demo_4);
module_exit(exit_demo_4);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

