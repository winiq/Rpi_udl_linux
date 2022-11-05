#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2715fb3a, "spi_mem_supports_op" },
	{ 0x1cf47500, "spi_mem_adjust_op_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x95ee7043, "spi_mem_get_name" },
	{ 0xc36f0c82, "devm_spi_mem_dirmap_create" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8f836a7c, "spi_mem_driver_unregister" },
	{ 0xee753ab5, "spi_mem_dirmap_write" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xb7c0f443, "sort" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x6587c97e, "module_put" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x8b085c17, "mtd_device_parse_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7101a1df, "spi_mem_exec_op" },
	{ 0x905ff1fc, "mtd_device_unregister" },
	{ 0x81ab6ac8, "spi_mem_dirmap_read" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x7ac94d86, "spi_mem_driver_register_with_owner" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("spi:spi-nor");
MODULE_ALIAS("spi:s25sl064a");
MODULE_ALIAS("spi:w25x16");
MODULE_ALIAS("spi:m25p10");
MODULE_ALIAS("spi:m25px64");
MODULE_ALIAS("spi:at25df321a");
MODULE_ALIAS("spi:at25df641");
MODULE_ALIAS("spi:at26df081a");
MODULE_ALIAS("spi:mx25l4005a");
MODULE_ALIAS("spi:mx25l1606e");
MODULE_ALIAS("spi:mx25l6405d");
MODULE_ALIAS("spi:mx25l12805d");
MODULE_ALIAS("spi:mx25l25635e");
MODULE_ALIAS("spi:mx66l51235l");
MODULE_ALIAS("spi:n25q064");
MODULE_ALIAS("spi:n25q128a11");
MODULE_ALIAS("spi:n25q128a13");
MODULE_ALIAS("spi:n25q512a");
MODULE_ALIAS("spi:s25fl256s1");
MODULE_ALIAS("spi:s25fl512s");
MODULE_ALIAS("spi:s25sl12801");
MODULE_ALIAS("spi:s25fl008k");
MODULE_ALIAS("spi:s25fl064k");
MODULE_ALIAS("spi:sst25vf040b");
MODULE_ALIAS("spi:sst25vf016b");
MODULE_ALIAS("spi:sst25vf032b");
MODULE_ALIAS("spi:sst25wf040");
MODULE_ALIAS("spi:m25p40");
MODULE_ALIAS("spi:m25p80");
MODULE_ALIAS("spi:m25p16");
MODULE_ALIAS("spi:m25p32");
MODULE_ALIAS("spi:m25p64");
MODULE_ALIAS("spi:m25p128");
MODULE_ALIAS("spi:w25x80");
MODULE_ALIAS("spi:w25x32");
MODULE_ALIAS("spi:w25q32");
MODULE_ALIAS("spi:w25q32dw");
MODULE_ALIAS("spi:w25q80bl");
MODULE_ALIAS("spi:w25q128");
MODULE_ALIAS("spi:w25q256");
MODULE_ALIAS("spi:m25p05-nonjedec");
MODULE_ALIAS("spi:m25p10-nonjedec");
MODULE_ALIAS("spi:m25p20-nonjedec");
MODULE_ALIAS("spi:m25p40-nonjedec");
MODULE_ALIAS("spi:m25p80-nonjedec");
MODULE_ALIAS("spi:m25p16-nonjedec");
MODULE_ALIAS("spi:m25p32-nonjedec");
MODULE_ALIAS("spi:m25p64-nonjedec");
MODULE_ALIAS("spi:m25p128-nonjedec");
MODULE_ALIAS("spi:mr25h128");
MODULE_ALIAS("spi:mr25h256");
MODULE_ALIAS("spi:mr25h10");
MODULE_ALIAS("spi:mr25h40");
MODULE_ALIAS("of:N*T*Cjedec,spi-nor");
MODULE_ALIAS("of:N*T*Cjedec,spi-norC*");

MODULE_INFO(srcversion, "294B689AC69D5AEE7A21111");
