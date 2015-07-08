#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Mahammad Ismayilzada");
MODULE_DESCRIPTION("Hello World Driver");

static int hello_init(void)
{
	pr_debug("Hello, World!\n");
	return 0;
}

static void hello_exit(void)
{
	pr_debug("Goodbye, World!\n");
}

module_init(hello_init);
module_exit(hello_exit);
