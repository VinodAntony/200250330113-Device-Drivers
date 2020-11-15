#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include"add_header.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VINOD");

static int value1 = 1;
static int value2 = 2;

static int __init add_init(void){
	printk(KERN_ALERT"\nlet's add\n");
	printk(KERN_ALERT"\naddition of %d and %d is %d\n",value1,value2,adder(value1,value2));
	return 0;
}

static void __exit bye_exit(void){
	printk(KERN_ALERT"\nbye\n");
}

module_param(value1,int,S_IRUGO);
module_param(value2,int,S_IRUGO);

module_init(add_init);
module_exit(bye_exit);

