#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VINOD ANTONY");

static char* charvar = "default parameter";
static int intvar = 10; 

module_param(charvar, charp, S_IRUGO);
module_param(intvar, int, S_IRUGO);

static int __init param_init(void){

	printk(KERN_ALERT"\nstring passed through command\n");
	printk(KERN_ALERT"line is : %s\n",charvar);
	return 0;
}

static void __exit param_exit(void){

	printk(KERN_ALERT"\nbye bye my chunk\n");

}

module_init(param_init);
module_exit(param_exit);