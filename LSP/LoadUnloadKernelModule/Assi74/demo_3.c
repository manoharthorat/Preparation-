#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int demo_data __initdata = 21;

static int __init demo_3_init(void)
{
	printk(KERN_INFO "Demo : Module inserted with data %d\n",demo_data);
	return 0;
}

static void __exit demo_3_exit(void)
{
	printk(KERN_INFO "Demo : Module removed \n");
}

module_init(demo_3_init);
module_exit(demo_3_exit);
