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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc46051e2, "i2c_smbus_write_word_data" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc5933243, "input_free_device" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0xb156d5c3, "i2c_smbus_read_word_data" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x34fa48c2, "input_unregister_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tca6416-keys");
MODULE_ALIAS("i2c:tca6408-keys");

MODULE_INFO(srcversion, "3A45BDDE185578A2F14B45F");
