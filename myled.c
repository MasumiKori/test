#include <linux/module.h>

static int __init init_mod(void)
{
	return 0;
}

static void__exit cleanup_mod(void)
{
}

module_init(init_mod);
module_exit(cleanup_mod);
