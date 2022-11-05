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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb57e7350, "rc_keydown" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x696f8a06, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x55487139, "rc_unregister_device" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "4E45F5A6680E59791EEBDC7");
