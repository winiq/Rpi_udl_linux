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
	{ 0x96848186, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa3bc5fda, "fwnode_property_read_string" },
	{ 0xd6748ca5, "irq_of_parse_and_map" },
	{ 0x93681f59, "fwnode_property_present" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0xfada9c15, "of_fwnode_ops" },
	{ 0x63fff561, "device_property_read_string" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x2ae3aaa6, "device_get_child_node_count" },
	{ 0x926387af, "gpiod_cansleep" },
	{ 0x2d0ba65f, "gpiod_set_debounce" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37740b71, "gpiod_is_active_low" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0xbc41b18a, "devm_fwnode_gpiod_get_index" },
	{ 0xb370785c, "device_get_next_child_node" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x60cc156, "devm_request_any_context_irq" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd945afd1, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "977BC2C7C8360BA56889E48");
