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
	{ 0x826655e4, "param_ops_int" },
	{ 0x9bbbdfa1, "w1_unregister_family" },
	{ 0x58afe81b, "w1_register_family" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x141159e2, "w1_touch_bit" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9d601d65, "w1_next_pullup" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5a921311, "strncmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x14908ae1, "w1_read_block" },
	{ 0xa3718e02, "w1_write_8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9484540f, "w1_read_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5687a2ab, "w1_write_block" },
	{ 0xb505a9f5, "w1_reset_bus" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "04F9691F6320AC31570B3F8");
