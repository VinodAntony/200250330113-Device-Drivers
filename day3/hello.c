#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init hello_init(void){

	printk(KERN_ALERT "\nHello WOrld\n");
	return 0;
}

static void __exit hello_exit(void){

	printk(KERN_ALERT "\ngoodbye friend\n");
}

module_init(hello_init);
module_exit(hello_exit);