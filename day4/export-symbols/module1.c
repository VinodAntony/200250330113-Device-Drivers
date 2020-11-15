#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VINOD");

static int adder(int a, int b){
	return a+b;
}

EXPORT_SYMBOL(adder);

static int __init enter(void){
	printk(KERN_ALERT"\nmodule loaded\n");
	return 0;
}

static void __exit bye(void){
	printk(KERN_ALERT"\nBYE MY FRAAND\n");
}

module_init(enter);
module_exit(bye);
