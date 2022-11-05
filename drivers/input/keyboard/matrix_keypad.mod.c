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
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x71d691f4, "gpiod_get_raw_value_cansleep" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xb22f8129, "of_get_property" },
	{ 0x848f5e2a, "of_count_phandle_with_args" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc5933243, "input_free_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x6de3bb9a, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "BEECF11A9AAE07F003A4CAE");
